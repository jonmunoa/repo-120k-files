// fichero 31213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31213;

Registro31213 crear_registro31213(int id) {
    Registro31213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
