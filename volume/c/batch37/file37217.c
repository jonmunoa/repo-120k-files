// fichero 37217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37217;

Registro37217 crear_registro37217(int id) {
    Registro37217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
