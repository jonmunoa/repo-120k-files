// fichero 20409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20409;

Registro20409 crear_registro20409(int id) {
    Registro20409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
