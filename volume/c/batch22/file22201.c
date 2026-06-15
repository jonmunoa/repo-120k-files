// fichero 22201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22201;

Registro22201 crear_registro22201(int id) {
    Registro22201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
