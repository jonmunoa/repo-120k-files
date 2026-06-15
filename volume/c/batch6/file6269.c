// fichero 6269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6269;

Registro6269 crear_registro6269(int id) {
    Registro6269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
