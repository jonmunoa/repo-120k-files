// fichero 43281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43281;

Registro43281 crear_registro43281(int id) {
    Registro43281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
