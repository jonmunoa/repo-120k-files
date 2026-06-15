// fichero 16421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16421;

Registro16421 crear_registro16421(int id) {
    Registro16421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
