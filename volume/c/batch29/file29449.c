// fichero 29449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29449;

Registro29449 crear_registro29449(int id) {
    Registro29449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
