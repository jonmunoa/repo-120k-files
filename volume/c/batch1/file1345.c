// fichero 1345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1345;

Registro1345 crear_registro1345(int id) {
    Registro1345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
