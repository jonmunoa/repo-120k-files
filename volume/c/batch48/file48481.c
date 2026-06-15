// fichero 48481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48481;

Registro48481 crear_registro48481(int id) {
    Registro48481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
