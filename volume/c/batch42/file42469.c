// fichero 42469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42469;

Registro42469 crear_registro42469(int id) {
    Registro42469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
