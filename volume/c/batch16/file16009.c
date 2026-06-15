// fichero 16009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16009;

Registro16009 crear_registro16009(int id) {
    Registro16009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
