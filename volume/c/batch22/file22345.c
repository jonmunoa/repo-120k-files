// fichero 22345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22345;

Registro22345 crear_registro22345(int id) {
    Registro22345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
