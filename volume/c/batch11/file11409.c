// fichero 11409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11409;

Registro11409 crear_registro11409(int id) {
    Registro11409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
