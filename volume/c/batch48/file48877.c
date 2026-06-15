// fichero 48877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48877;

Registro48877 crear_registro48877(int id) {
    Registro48877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
