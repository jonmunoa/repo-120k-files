// fichero 1449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1449;

Registro1449 crear_registro1449(int id) {
    Registro1449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
