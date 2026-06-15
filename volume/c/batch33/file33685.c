// fichero 33685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33685;

Registro33685 crear_registro33685(int id) {
    Registro33685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
