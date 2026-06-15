// fichero 43393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43393;

Registro43393 crear_registro43393(int id) {
    Registro43393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
