// fichero 46993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46993;

Registro46993 crear_registro46993(int id) {
    Registro46993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
