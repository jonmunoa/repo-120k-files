// fichero 20101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20101;

Registro20101 crear_registro20101(int id) {
    Registro20101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
