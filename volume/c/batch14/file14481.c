// fichero 14481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14481;

Registro14481 crear_registro14481(int id) {
    Registro14481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
