// fichero 46365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46365;

Registro46365 crear_registro46365(int id) {
    Registro46365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
