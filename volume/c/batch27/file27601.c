// fichero 27601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27601;

Registro27601 crear_registro27601(int id) {
    Registro27601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
