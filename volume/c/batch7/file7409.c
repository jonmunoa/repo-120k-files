// fichero 7409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7409;

Registro7409 crear_registro7409(int id) {
    Registro7409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
