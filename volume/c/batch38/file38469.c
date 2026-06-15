// fichero 38469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38469;

Registro38469 crear_registro38469(int id) {
    Registro38469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
