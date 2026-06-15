// fichero 14245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14245;

Registro14245 crear_registro14245(int id) {
    Registro14245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
