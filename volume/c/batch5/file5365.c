// fichero 5365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5365;

Registro5365 crear_registro5365(int id) {
    Registro5365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
