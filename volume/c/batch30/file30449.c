// fichero 30449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30449;

Registro30449 crear_registro30449(int id) {
    Registro30449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
