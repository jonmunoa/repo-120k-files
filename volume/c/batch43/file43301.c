// fichero 43301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43301;

Registro43301 crear_registro43301(int id) {
    Registro43301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
