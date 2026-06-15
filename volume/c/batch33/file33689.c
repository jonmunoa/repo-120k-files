// fichero 33689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33689;

Registro33689 crear_registro33689(int id) {
    Registro33689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
