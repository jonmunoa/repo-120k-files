// fichero 6373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6373;

Registro6373 crear_registro6373(int id) {
    Registro6373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
