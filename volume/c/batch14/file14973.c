// fichero 14973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14973;

Registro14973 crear_registro14973(int id) {
    Registro14973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
