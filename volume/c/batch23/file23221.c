// fichero 23221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23221;

Registro23221 crear_registro23221(int id) {
    Registro23221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
