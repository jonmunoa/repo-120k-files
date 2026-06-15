// fichero 33401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33401;

Registro33401 crear_registro33401(int id) {
    Registro33401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
