// fichero 46293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46293;

Registro46293 crear_registro46293(int id) {
    Registro46293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
