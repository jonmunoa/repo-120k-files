// fichero 32621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32621;

Registro32621 crear_registro32621(int id) {
    Registro32621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
