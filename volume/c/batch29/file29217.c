// fichero 29217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29217;

Registro29217 crear_registro29217(int id) {
    Registro29217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
