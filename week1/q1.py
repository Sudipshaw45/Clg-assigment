if __name__ == "__main__":
    arr = [10, 20, 30, 40]
    ele = 50
    print("Array before insertion")
    for i in range(len(arr)):
        print(arr[i], end=" ")

    # Insert element at the end
    arr.append(ele)

    print("\nArray after insertion")
    for i in range(len(arr)):
        print(arr[i], end=" ")