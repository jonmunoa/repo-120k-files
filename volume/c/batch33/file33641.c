// fichero 33641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33641;

Registro33641 crear_registro33641(int id) {
    Registro33641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
