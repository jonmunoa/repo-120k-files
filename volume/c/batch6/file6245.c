// fichero 6245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6245;

Registro6245 crear_registro6245(int id) {
    Registro6245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
