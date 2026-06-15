// fichero 43105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43105;

Registro43105 crear_registro43105(int id) {
    Registro43105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
