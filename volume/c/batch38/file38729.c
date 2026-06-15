// fichero 38729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38729;

Registro38729 crear_registro38729(int id) {
    Registro38729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
