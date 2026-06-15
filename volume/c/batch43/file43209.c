// fichero 43209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43209;

Registro43209 crear_registro43209(int id) {
    Registro43209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
