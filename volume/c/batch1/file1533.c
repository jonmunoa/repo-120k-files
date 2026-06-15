// fichero 1533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1533;

Registro1533 crear_registro1533(int id) {
    Registro1533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
