// fichero 48537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48537;

Registro48537 crear_registro48537(int id) {
    Registro48537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
