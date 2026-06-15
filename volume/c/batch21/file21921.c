// fichero 21921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21921;

Registro21921 crear_registro21921(int id) {
    Registro21921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
