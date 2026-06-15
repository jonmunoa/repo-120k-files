// fichero 34541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34541;

Registro34541 crear_registro34541(int id) {
    Registro34541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
