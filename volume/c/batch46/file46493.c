// fichero 46493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46493;

Registro46493 crear_registro46493(int id) {
    Registro46493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
