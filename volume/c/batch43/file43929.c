// fichero 43929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43929;

Registro43929 crear_registro43929(int id) {
    Registro43929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
