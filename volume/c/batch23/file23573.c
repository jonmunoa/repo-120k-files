// fichero 23573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23573;

Registro23573 crear_registro23573(int id) {
    Registro23573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
