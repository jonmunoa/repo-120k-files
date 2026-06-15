// fichero 4501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4501;

Registro4501 crear_registro4501(int id) {
    Registro4501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
