#include "type.h"

fat32_t* new_fat32(){
        fat32_t* new = malloc(sizeof(fat32_t));
        return new;
}
ext4_t* new_ext4(){
        ext4_t* new = malloc(sizeof(ext4_t));
                return new;
}
ntfs_t* new_ntfs(){
        ntfs_t* new = malloc(sizeof(ntfs_t));
        return new;
}
fat32_t* copy_fat32(fat32_t* file){
        fat32_t* new = malloc(sizeof(fat32_t));
        *new = *file;
        return new;
}
ext4_t* copy_ext4(ext4_t* file){
        ext4_t* new = malloc(sizeof(ext4_t));
        *new = *file;
        return new;
}
ntfs_t* copy_ntfs(ntfs_t* file){
        ntfs_t* new = malloc(sizeof(ntfs_t));
        *new = *file;
        return new;
}
void rm_fat32(fat32_t* file){
        free(file);
}
void rm_ext4(ext4_t* file){
        free(file);
}
void rm_ntfs(ntfs_t* file){
        free(file);
}