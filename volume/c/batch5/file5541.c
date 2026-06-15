// fichero 5541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5541;

Registro5541 crear_registro5541(int id) {
    Registro5541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
