// fichero 43625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43625;

Registro43625 crear_registro43625(int id) {
    Registro43625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
