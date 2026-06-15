// fichero 6481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6481;

Registro6481 crear_registro6481(int id) {
    Registro6481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
