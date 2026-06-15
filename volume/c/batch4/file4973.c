// fichero 4973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4973;

Registro4973 crear_registro4973(int id) {
    Registro4973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
