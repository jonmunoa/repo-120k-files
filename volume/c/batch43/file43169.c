// fichero 43169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43169;

Registro43169 crear_registro43169(int id) {
    Registro43169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
