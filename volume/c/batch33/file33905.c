// fichero 33905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33905;

Registro33905 crear_registro33905(int id) {
    Registro33905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
