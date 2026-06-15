// fichero 21377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21377;

Registro21377 crear_registro21377(int id) {
    Registro21377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
