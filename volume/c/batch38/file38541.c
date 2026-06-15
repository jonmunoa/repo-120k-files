// fichero 38541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38541;

Registro38541 crear_registro38541(int id) {
    Registro38541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
