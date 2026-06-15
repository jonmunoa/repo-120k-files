// fichero 29493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29493;

Registro29493 crear_registro29493(int id) {
    Registro29493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
