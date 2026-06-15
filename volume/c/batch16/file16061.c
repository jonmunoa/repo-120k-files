// fichero 16061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16061;

Registro16061 crear_registro16061(int id) {
    Registro16061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
