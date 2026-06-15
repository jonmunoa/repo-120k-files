// fichero 19305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19305;

Registro19305 crear_registro19305(int id) {
    Registro19305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
