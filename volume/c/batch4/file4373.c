// fichero 4373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4373;

Registro4373 crear_registro4373(int id) {
    Registro4373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
