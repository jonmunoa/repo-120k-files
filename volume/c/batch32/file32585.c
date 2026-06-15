// fichero 32585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32585;

Registro32585 crear_registro32585(int id) {
    Registro32585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
