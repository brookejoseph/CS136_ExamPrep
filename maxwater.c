int maxArea(int* height, int heightSize) {
     int first = 0;
     int second = 0;
     int index1 = 0;
     int index2= 0;
     for(int i = 0; i < heightSize; i++){
        if ((height[i] > first) && (height[i] > second)){
            if(first != height[i]){
                first = height[i];
                index1 = i;
            }
            first = height[i];
            continue;
        }
        else if ((height[i] < first) && (height[i] > second)){
            if(second != height[i]){
                second = height[i];
                index2 = i;
            }
            second = height[i];
            continue;
        }
        else if ((height[i] < first) && (height[i] < second)){
            first = second;
        }
        else{
            continue;
        }
     }
     return (index1 - index2) * second;
}
