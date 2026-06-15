// fichero 15449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15449;

Registro15449 crear_registro15449(int id) {
    Registro15449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
