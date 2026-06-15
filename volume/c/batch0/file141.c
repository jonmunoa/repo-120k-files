// fichero 141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro141;

Registro141 crear_registro141(int id) {
    Registro141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
