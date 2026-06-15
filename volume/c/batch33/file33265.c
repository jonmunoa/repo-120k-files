// fichero 33265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33265;

Registro33265 crear_registro33265(int id) {
    Registro33265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
