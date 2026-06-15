// fichero 32845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32845;

Registro32845 crear_registro32845(int id) {
    Registro32845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
