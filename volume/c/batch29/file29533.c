// fichero 29533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29533;

Registro29533 crear_registro29533(int id) {
    Registro29533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
