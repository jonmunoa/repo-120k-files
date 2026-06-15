// fichero 23997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23997;

Registro23997 crear_registro23997(int id) {
    Registro23997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
