// fichero 14449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14449;

Registro14449 crear_registro14449(int id) {
    Registro14449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
