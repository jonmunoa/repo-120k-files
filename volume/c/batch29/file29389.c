// fichero 29389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29389;

Registro29389 crear_registro29389(int id) {
    Registro29389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
