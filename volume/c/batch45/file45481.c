// fichero 45481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45481;

Registro45481 crear_registro45481(int id) {
    Registro45481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
