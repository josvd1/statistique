float mediane(float array[], int numElements)
{
    float mediane = 0;

    if (numElements % 2 == 1)
    {
        mediane = array[numElements/2];
    }
    else if (numElements % 2 == 0)
    {
        float sum_elements = array[numElements/2] + array[numElements/2 - 1];
        mediane = sum_elements / 2;
    }

    return (mediane);
}