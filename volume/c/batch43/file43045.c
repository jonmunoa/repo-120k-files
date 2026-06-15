// fichero 43045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43045;

Registro43045 crear_registro43045(int id) {
    Registro43045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
