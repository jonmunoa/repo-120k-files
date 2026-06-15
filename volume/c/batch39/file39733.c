// fichero 39733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39733;

Registro39733 crear_registro39733(int id) {
    Registro39733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
