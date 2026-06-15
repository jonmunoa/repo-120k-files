// fichero 33861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33861;

Registro33861 crear_registro33861(int id) {
    Registro33861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
