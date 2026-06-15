// fichero 33165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33165;

Registro33165 crear_registro33165(int id) {
    Registro33165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
