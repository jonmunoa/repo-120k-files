// fichero 29461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29461;

Registro29461 crear_registro29461(int id) {
    Registro29461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
