// fichero 33289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33289;

Registro33289 crear_registro33289(int id) {
    Registro33289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
