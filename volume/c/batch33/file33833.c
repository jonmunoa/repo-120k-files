// fichero 33833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33833;

Registro33833 crear_registro33833(int id) {
    Registro33833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
