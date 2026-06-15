// fichero 14061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14061;

Registro14061 crear_registro14061(int id) {
    Registro14061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
