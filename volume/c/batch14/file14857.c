// fichero 14857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14857;

Registro14857 crear_registro14857(int id) {
    Registro14857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
