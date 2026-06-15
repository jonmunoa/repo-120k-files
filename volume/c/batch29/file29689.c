// fichero 29689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29689;

Registro29689 crear_registro29689(int id) {
    Registro29689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
