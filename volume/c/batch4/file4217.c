// fichero 4217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4217;

Registro4217 crear_registro4217(int id) {
    Registro4217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
