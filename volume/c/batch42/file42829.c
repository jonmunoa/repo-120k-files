// fichero 42829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42829;

Registro42829 crear_registro42829(int id) {
    Registro42829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
