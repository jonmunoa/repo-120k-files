// fichero 22449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22449;

Registro22449 crear_registro22449(int id) {
    Registro22449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
