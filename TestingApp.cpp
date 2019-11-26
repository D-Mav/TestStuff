int makeArrayConsecutive2(std::vector<int> statues) {
    std::sort(statues.begin(), statues.end());
    int missing=0;
    for(size_t i =1; i < statues.size(); ++i)
    {
        missing+=statues[i]-statues[i-1]-1;
    }
    return missing;
}
