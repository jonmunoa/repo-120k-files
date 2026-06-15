// fichero 42825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42825;

Registro42825 crear_registro42825(int id) {
    Registro42825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
