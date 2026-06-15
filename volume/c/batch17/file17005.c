// fichero 17005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17005;

Registro17005 crear_registro17005(int id) {
    Registro17005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
