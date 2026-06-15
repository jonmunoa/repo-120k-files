// fichero 43501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43501;

Registro43501 crear_registro43501(int id) {
    Registro43501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
