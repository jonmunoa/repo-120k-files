// fichero 23633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23633;

Registro23633 crear_registro23633(int id) {
    Registro23633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
