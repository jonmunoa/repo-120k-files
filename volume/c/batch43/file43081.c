// fichero 43081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43081;

Registro43081 crear_registro43081(int id) {
    Registro43081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
