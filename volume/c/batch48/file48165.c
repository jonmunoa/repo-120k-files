// fichero 48165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48165;

Registro48165 crear_registro48165(int id) {
    Registro48165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
