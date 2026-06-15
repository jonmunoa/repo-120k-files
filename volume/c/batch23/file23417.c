// fichero 23417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23417;

Registro23417 crear_registro23417(int id) {
    Registro23417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
