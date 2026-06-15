// fichero 43313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43313;

Registro43313 crear_registro43313(int id) {
    Registro43313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
