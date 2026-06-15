// fichero 32889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32889;

Registro32889 crear_registro32889(int id) {
    Registro32889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
