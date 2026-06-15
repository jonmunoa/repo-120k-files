// fichero 38253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38253;

Registro38253 crear_registro38253(int id) {
    Registro38253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
