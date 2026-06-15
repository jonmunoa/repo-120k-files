// fichero 33469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33469;

Registro33469 crear_registro33469(int id) {
    Registro33469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
