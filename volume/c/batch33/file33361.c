// fichero 33361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33361;

Registro33361 crear_registro33361(int id) {
    Registro33361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
