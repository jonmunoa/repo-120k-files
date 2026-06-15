// fichero 16677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16677;

Registro16677 crear_registro16677(int id) {
    Registro16677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
