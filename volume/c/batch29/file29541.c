// fichero 29541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29541;

Registro29541 crear_registro29541(int id) {
    Registro29541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
