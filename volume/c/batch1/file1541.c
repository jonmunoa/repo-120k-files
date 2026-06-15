// fichero 1541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1541;

Registro1541 crear_registro1541(int id) {
    Registro1541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
