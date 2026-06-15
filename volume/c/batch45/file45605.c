// fichero 45605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45605;

Registro45605 crear_registro45605(int id) {
    Registro45605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
