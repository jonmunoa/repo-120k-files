// fichero 23065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23065;

Registro23065 crear_registro23065(int id) {
    Registro23065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
