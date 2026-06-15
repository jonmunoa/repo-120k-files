// fichero 1389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1389;

Registro1389 crear_registro1389(int id) {
    Registro1389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
