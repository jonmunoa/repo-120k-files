// fichero 7253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7253;

Registro7253 crear_registro7253(int id) {
    Registro7253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
