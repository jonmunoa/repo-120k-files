// fichero 45017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45017;

Registro45017 crear_registro45017(int id) {
    Registro45017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
