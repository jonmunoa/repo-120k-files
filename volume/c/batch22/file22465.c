// fichero 22465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22465;

Registro22465 crear_registro22465(int id) {
    Registro22465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
