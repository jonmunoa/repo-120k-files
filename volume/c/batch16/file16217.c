// fichero 16217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16217;

Registro16217 crear_registro16217(int id) {
    Registro16217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
