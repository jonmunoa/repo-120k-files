// fichero 23589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23589;

Registro23589 crear_registro23589(int id) {
    Registro23589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
