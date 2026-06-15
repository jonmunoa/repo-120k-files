// fichero 26505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26505;

Registro26505 crear_registro26505(int id) {
    Registro26505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
