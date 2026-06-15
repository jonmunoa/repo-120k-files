// fichero 33813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33813;

Registro33813 crear_registro33813(int id) {
    Registro33813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
