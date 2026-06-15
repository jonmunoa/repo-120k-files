// fichero 1253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1253;

Registro1253 crear_registro1253(int id) {
    Registro1253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
