// fichero 28201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28201;

Registro28201 crear_registro28201(int id) {
    Registro28201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
