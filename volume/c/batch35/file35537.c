// fichero 35537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35537;

Registro35537 crear_registro35537(int id) {
    Registro35537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
