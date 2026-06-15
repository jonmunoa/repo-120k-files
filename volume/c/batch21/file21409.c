// fichero 21409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21409;

Registro21409 crear_registro21409(int id) {
    Registro21409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
