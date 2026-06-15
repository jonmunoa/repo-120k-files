// fichero 46533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46533;

Registro46533 crear_registro46533(int id) {
    Registro46533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
