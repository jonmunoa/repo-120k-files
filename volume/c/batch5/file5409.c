// fichero 5409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5409;

Registro5409 crear_registro5409(int id) {
    Registro5409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
