// fichero 4749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4749;

Registro4749 crear_registro4749(int id) {
    Registro4749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
