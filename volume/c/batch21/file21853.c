// fichero 21853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21853;

Registro21853 crear_registro21853(int id) {
    Registro21853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
