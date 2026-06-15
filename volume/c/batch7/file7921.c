// fichero 7921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7921;

Registro7921 crear_registro7921(int id) {
    Registro7921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
