// fichero 101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro101;

Registro101 crear_registro101(int id) {
    Registro101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
