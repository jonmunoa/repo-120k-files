// fichero 14237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14237;

Registro14237 crear_registro14237(int id) {
    Registro14237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
