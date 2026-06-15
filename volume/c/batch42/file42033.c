// fichero 42033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42033;

Registro42033 crear_registro42033(int id) {
    Registro42033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
