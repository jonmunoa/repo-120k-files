// fichero 31389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31389;

Registro31389 crear_registro31389(int id) {
    Registro31389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
