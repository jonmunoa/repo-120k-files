// fichero 24409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24409;

Registro24409 crear_registro24409(int id) {
    Registro24409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
