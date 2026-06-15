// fichero 33933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33933;

Registro33933 crear_registro33933(int id) {
    Registro33933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
