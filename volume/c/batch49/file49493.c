// fichero 49493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49493;

Registro49493 crear_registro49493(int id) {
    Registro49493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
