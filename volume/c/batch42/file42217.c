// fichero 42217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42217;

Registro42217 crear_registro42217(int id) {
    Registro42217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
