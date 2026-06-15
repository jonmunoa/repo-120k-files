// fichero 33209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33209;

Registro33209 crear_registro33209(int id) {
    Registro33209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
