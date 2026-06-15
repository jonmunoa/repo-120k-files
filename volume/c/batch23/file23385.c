// fichero 23385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23385;

Registro23385 crear_registro23385(int id) {
    Registro23385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
