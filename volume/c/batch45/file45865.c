// fichero 45865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45865;

Registro45865 crear_registro45865(int id) {
    Registro45865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
