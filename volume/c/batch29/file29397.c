// fichero 29397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29397;

Registro29397 crear_registro29397(int id) {
    Registro29397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
