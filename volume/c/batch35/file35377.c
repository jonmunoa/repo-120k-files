// fichero 35377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35377;

Registro35377 crear_registro35377(int id) {
    Registro35377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
