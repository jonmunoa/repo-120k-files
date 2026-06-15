// fichero 7517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7517;

Registro7517 crear_registro7517(int id) {
    Registro7517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
