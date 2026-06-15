// fichero 43905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43905;

Registro43905 crear_registro43905(int id) {
    Registro43905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
