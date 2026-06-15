// fichero 42189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42189;

Registro42189 crear_registro42189(int id) {
    Registro42189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
