// fichero 1305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1305;

Registro1305 crear_registro1305(int id) {
    Registro1305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
