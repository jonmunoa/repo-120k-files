// fichero 43577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43577;

Registro43577 crear_registro43577(int id) {
    Registro43577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
