// fichero 13221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13221;

Registro13221 crear_registro13221(int id) {
    Registro13221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
