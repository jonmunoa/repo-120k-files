// fichero 43233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43233;

Registro43233 crear_registro43233(int id) {
    Registro43233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
