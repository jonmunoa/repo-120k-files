// fichero 133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro133;

Registro133 crear_registro133(int id) {
    Registro133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
