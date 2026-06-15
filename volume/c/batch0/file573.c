// fichero 573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro573;

Registro573 crear_registro573(int id) {
    Registro573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
