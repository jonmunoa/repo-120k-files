// fichero 6449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6449;

Registro6449 crear_registro6449(int id) {
    Registro6449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
