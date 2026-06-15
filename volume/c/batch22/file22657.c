// fichero 22657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22657;

Registro22657 crear_registro22657(int id) {
    Registro22657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
