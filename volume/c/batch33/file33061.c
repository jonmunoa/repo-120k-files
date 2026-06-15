// fichero 33061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33061;

Registro33061 crear_registro33061(int id) {
    Registro33061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
