// fichero 33369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33369;

Registro33369 crear_registro33369(int id) {
    Registro33369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
