// fichero 22885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22885;

Registro22885 crear_registro22885(int id) {
    Registro22885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
