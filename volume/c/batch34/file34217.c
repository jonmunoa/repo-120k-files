// fichero 34217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34217;

Registro34217 crear_registro34217(int id) {
    Registro34217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
