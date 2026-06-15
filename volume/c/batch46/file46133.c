// fichero 46133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46133;

Registro46133 crear_registro46133(int id) {
    Registro46133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
