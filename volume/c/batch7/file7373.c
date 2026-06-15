// fichero 7373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7373;

Registro7373 crear_registro7373(int id) {
    Registro7373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
