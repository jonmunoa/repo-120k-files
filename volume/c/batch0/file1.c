// fichero 1 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1;

Registro1 crear_registro1(int id) {
    Registro1 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
