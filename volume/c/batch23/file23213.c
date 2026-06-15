// fichero 23213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23213;

Registro23213 crear_registro23213(int id) {
    Registro23213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
