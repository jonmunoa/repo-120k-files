// fichero 16641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16641;

Registro16641 crear_registro16641(int id) {
    Registro16641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
