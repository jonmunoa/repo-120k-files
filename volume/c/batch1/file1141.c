// fichero 1141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1141;

Registro1141 crear_registro1141(int id) {
    Registro1141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
