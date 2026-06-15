// fichero 23469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23469;

Registro23469 crear_registro23469(int id) {
    Registro23469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
