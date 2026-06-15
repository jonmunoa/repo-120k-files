// fichero 5449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5449;

Registro5449 crear_registro5449(int id) {
    Registro5449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
