// fichero 49541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49541;

Registro49541 crear_registro49541(int id) {
    Registro49541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
