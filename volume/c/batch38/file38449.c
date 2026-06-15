// fichero 38449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38449;

Registro38449 crear_registro38449(int id) {
    Registro38449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
