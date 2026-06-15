// fichero 29973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29973;

Registro29973 crear_registro29973(int id) {
    Registro29973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
