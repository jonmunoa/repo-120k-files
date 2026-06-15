// fichero 22205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22205;

Registro22205 crear_registro22205(int id) {
    Registro22205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
