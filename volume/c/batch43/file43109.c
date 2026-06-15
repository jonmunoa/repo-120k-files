// fichero 43109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43109;

Registro43109 crear_registro43109(int id) {
    Registro43109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
