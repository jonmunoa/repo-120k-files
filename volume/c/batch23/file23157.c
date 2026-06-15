// fichero 23157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23157;

Registro23157 crear_registro23157(int id) {
    Registro23157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
