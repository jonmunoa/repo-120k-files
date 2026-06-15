// fichero 47377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47377;

Registro47377 crear_registro47377(int id) {
    Registro47377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
