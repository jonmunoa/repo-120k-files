// fichero 33757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33757;

Registro33757 crear_registro33757(int id) {
    Registro33757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
