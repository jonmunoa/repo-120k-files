// fichero 21641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21641;

Registro21641 crear_registro21641(int id) {
    Registro21641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
