// fichero 46885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46885;

Registro46885 crear_registro46885(int id) {
    Registro46885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
