// fichero 37469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37469;

Registro37469 crear_registro37469(int id) {
    Registro37469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
