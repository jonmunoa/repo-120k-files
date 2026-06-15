// fichero 30993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30993;

Registro30993 crear_registro30993(int id) {
    Registro30993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
