// fichero 47341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47341;

Registro47341 crear_registro47341(int id) {
    Registro47341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
