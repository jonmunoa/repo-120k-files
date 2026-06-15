// fichero 6541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6541;

Registro6541 crear_registro6541(int id) {
    Registro6541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
