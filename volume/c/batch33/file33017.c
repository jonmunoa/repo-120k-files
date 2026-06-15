// fichero 33017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33017;

Registro33017 crear_registro33017(int id) {
    Registro33017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
