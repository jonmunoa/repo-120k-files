// fichero 22177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22177;

Registro22177 crear_registro22177(int id) {
    Registro22177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
