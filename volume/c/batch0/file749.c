// fichero 749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro749;

Registro749 crear_registro749(int id) {
    Registro749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
