// fichero 357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro357;

Registro357 crear_registro357(int id) {
    Registro357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
