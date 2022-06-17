def quickSort(sequence):
    length = len(sequence)
    if length <= 1:
        return sequence
    else:
        pivot = sequence.pop()

    elementsGreater = []
    elementsLower = []

    for element in sequence:
        if element > pivot:
            elementsGreater.append(element)

        else:
            elementsLower.append(element)

    return quickSort(elementsLower) + [pivot] + quickSort(elementsGreater)

print(quickSort([7,6,9,3,4,5,1,8]))
