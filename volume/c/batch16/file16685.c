// fichero 16685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16685;

Registro16685 crear_registro16685(int id) {
    Registro16685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
