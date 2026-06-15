// fichero 23185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23185;

Registro23185 crear_registro23185(int id) {
    Registro23185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
