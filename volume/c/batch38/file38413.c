// fichero 38413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38413;

Registro38413 crear_registro38413(int id) {
    Registro38413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
