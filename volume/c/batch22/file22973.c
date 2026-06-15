// fichero 22973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22973;

Registro22973 crear_registro22973(int id) {
    Registro22973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
