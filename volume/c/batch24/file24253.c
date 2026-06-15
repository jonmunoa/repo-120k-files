// fichero 24253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24253;

Registro24253 crear_registro24253(int id) {
    Registro24253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
