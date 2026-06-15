// fichero 33449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33449;

Registro33449 crear_registro33449(int id) {
    Registro33449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
