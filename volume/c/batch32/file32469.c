// fichero 32469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32469;

Registro32469 crear_registro32469(int id) {
    Registro32469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
