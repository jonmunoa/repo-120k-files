// fichero 21469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21469;

Registro21469 crear_registro21469(int id) {
    Registro21469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
