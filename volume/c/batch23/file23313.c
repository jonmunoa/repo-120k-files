// fichero 23313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23313;

Registro23313 crear_registro23313(int id) {
    Registro23313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
