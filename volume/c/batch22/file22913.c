// fichero 22913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22913;

Registro22913 crear_registro22913(int id) {
    Registro22913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
