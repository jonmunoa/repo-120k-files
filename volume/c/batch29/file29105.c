// fichero 29105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29105;

Registro29105 crear_registro29105(int id) {
    Registro29105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
