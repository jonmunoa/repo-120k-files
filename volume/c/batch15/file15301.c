// fichero 15301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15301;

Registro15301 crear_registro15301(int id) {
    Registro15301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
