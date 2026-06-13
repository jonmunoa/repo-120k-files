// fichero 4373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4373;

Registro4373 crear_registro4373(int id) {
    Registro4373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4373(Registro4373 r) {
    return r.valor + r.id;
}
