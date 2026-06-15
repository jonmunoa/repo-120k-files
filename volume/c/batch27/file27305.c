// fichero 27305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27305;

Registro27305 crear_registro27305(int id) {
    Registro27305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
