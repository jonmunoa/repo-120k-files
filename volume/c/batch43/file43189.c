// fichero 43189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43189;

Registro43189 crear_registro43189(int id) {
    Registro43189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
