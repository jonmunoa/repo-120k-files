// fichero 15833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15833;

Registro15833 crear_registro15833(int id) {
    Registro15833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
