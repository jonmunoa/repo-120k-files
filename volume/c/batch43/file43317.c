// fichero 43317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43317;

Registro43317 crear_registro43317(int id) {
    Registro43317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
