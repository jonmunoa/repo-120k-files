// fichero 26409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26409;

Registro26409 crear_registro26409(int id) {
    Registro26409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
