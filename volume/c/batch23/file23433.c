// fichero 23433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23433;

Registro23433 crear_registro23433(int id) {
    Registro23433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
