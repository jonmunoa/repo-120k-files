// fichero 38217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38217;

Registro38217 crear_registro38217(int id) {
    Registro38217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
