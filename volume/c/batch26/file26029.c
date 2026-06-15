// fichero 26029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26029;

Registro26029 crear_registro26029(int id) {
    Registro26029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
