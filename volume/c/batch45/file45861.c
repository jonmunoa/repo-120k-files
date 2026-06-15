// fichero 45861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45861;

Registro45861 crear_registro45861(int id) {
    Registro45861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
