// fichero 43001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43001;

Registro43001 crear_registro43001(int id) {
    Registro43001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
