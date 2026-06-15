// fichero 12409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12409;

Registro12409 crear_registro12409(int id) {
    Registro12409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
