// fichero 23045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23045;

Registro23045 crear_registro23045(int id) {
    Registro23045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
