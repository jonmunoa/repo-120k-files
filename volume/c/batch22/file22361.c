// fichero 22361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22361;

Registro22361 crear_registro22361(int id) {
    Registro22361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
