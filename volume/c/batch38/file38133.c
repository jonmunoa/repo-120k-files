// fichero 38133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38133;

Registro38133 crear_registro38133(int id) {
    Registro38133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
