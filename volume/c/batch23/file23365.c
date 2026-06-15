// fichero 23365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23365;

Registro23365 crear_registro23365(int id) {
    Registro23365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
