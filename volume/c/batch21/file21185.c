// fichero 21185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21185;

Registro21185 crear_registro21185(int id) {
    Registro21185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
