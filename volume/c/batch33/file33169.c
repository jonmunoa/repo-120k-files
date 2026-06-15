// fichero 33169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33169;

Registro33169 crear_registro33169(int id) {
    Registro33169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
