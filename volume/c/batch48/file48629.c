// fichero 48629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48629;

Registro48629 crear_registro48629(int id) {
    Registro48629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
