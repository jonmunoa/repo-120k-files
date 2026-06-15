// fichero 34433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34433;

Registro34433 crear_registro34433(int id) {
    Registro34433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
