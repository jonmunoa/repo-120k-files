// fichero 38061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38061;

Registro38061 crear_registro38061(int id) {
    Registro38061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
