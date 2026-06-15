// fichero 16973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16973;

Registro16973 crear_registro16973(int id) {
    Registro16973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
