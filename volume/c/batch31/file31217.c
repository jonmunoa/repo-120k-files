// fichero 31217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31217;

Registro31217 crear_registro31217(int id) {
    Registro31217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
