// fichero 2889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2889;

Registro2889 crear_registro2889(int id) {
    Registro2889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
