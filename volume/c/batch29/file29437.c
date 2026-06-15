// fichero 29437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29437;

Registro29437 crear_registro29437(int id) {
    Registro29437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
