// fichero 48133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48133;

Registro48133 crear_registro48133(int id) {
    Registro48133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
