// fichero 46601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46601;

Registro46601 crear_registro46601(int id) {
    Registro46601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
