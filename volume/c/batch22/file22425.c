// fichero 22425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22425;

Registro22425 crear_registro22425(int id) {
    Registro22425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
