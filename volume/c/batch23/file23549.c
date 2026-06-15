// fichero 23549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23549;

Registro23549 crear_registro23549(int id) {
    Registro23549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
