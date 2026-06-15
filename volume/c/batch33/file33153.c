// fichero 33153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33153;

Registro33153 crear_registro33153(int id) {
    Registro33153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
