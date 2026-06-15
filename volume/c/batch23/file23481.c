// fichero 23481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23481;

Registro23481 crear_registro23481(int id) {
    Registro23481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
