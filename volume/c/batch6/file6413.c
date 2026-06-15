// fichero 6413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6413;

Registro6413 crear_registro6413(int id) {
    Registro6413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
