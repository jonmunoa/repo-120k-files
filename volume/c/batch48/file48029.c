// fichero 48029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48029;

Registro48029 crear_registro48029(int id) {
    Registro48029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
