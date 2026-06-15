// fichero 6141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6141;

Registro6141 crear_registro6141(int id) {
    Registro6141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
