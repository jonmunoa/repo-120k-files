// fichero 16433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16433;

Registro16433 crear_registro16433(int id) {
    Registro16433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
