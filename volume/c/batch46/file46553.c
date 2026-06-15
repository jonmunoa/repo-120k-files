// fichero 46553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46553;

Registro46553 crear_registro46553(int id) {
    Registro46553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
