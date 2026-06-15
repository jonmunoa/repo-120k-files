// fichero 29429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29429;

Registro29429 crear_registro29429(int id) {
    Registro29429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
