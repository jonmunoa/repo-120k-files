// fichero 45933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45933;

Registro45933 crear_registro45933(int id) {
    Registro45933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
