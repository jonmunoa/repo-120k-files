// fichero 33101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33101;

Registro33101 crear_registro33101(int id) {
    Registro33101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
