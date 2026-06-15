// fichero 21017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21017;

Registro21017 crear_registro21017(int id) {
    Registro21017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
