// fichero 42937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42937;

Registro42937 crear_registro42937(int id) {
    Registro42937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
