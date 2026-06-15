// fichero 48093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48093;

Registro48093 crear_registro48093(int id) {
    Registro48093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
