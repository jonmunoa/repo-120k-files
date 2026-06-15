// fichero 22453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22453;

Registro22453 crear_registro22453(int id) {
    Registro22453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
