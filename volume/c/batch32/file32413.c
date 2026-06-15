// fichero 32413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32413;

Registro32413 crear_registro32413(int id) {
    Registro32413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
