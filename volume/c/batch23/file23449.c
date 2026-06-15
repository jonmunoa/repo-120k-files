// fichero 23449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23449;

Registro23449 crear_registro23449(int id) {
    Registro23449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
