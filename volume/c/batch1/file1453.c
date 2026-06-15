// fichero 1453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1453;

Registro1453 crear_registro1453(int id) {
    Registro1453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
