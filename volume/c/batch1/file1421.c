// fichero 1421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1421;

Registro1421 crear_registro1421(int id) {
    Registro1421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
