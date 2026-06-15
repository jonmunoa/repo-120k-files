// fichero 29673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29673;

Registro29673 crear_registro29673(int id) {
    Registro29673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
