// fichero 34861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34861;

Registro34861 crear_registro34861(int id) {
    Registro34861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
