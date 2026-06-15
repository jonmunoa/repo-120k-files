// fichero 21373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21373;

Registro21373 crear_registro21373(int id) {
    Registro21373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
