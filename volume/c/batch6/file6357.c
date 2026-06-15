// fichero 6357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6357;

Registro6357 crear_registro6357(int id) {
    Registro6357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
