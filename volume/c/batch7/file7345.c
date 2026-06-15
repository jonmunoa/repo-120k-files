// fichero 7345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7345;

Registro7345 crear_registro7345(int id) {
    Registro7345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
