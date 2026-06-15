// fichero 19433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19433;

Registro19433 crear_registro19433(int id) {
    Registro19433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
