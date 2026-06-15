// fichero 14957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14957;

Registro14957 crear_registro14957(int id) {
    Registro14957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
