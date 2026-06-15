// fichero 46749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46749;

Registro46749 crear_registro46749(int id) {
    Registro46749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
