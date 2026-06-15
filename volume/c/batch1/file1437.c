// fichero 1437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1437;

Registro1437 crear_registro1437(int id) {
    Registro1437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
