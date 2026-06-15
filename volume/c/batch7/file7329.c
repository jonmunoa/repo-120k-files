// fichero 7329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7329;

Registro7329 crear_registro7329(int id) {
    Registro7329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
