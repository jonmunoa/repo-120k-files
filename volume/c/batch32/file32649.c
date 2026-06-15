// fichero 32649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32649;

Registro32649 crear_registro32649(int id) {
    Registro32649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
