// fichero 23377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23377;

Registro23377 crear_registro23377(int id) {
    Registro23377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
