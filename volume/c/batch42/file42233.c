// fichero 42233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42233;

Registro42233 crear_registro42233(int id) {
    Registro42233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
