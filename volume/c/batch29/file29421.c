// fichero 29421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29421;

Registro29421 crear_registro29421(int id) {
    Registro29421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
