// fichero 43285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43285;

Registro43285 crear_registro43285(int id) {
    Registro43285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
