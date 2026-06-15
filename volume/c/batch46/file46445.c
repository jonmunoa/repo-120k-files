// fichero 46445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46445;

Registro46445 crear_registro46445(int id) {
    Registro46445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
