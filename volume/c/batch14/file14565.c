// fichero 14565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14565;

Registro14565 crear_registro14565(int id) {
    Registro14565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
