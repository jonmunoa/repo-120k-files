// fichero 213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro213;

Registro213 crear_registro213(int id) {
    Registro213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
