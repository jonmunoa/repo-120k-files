// fichero 48749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48749;

Registro48749 crear_registro48749(int id) {
    Registro48749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
