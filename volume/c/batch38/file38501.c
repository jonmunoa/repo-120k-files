// fichero 38501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38501;

Registro38501 crear_registro38501(int id) {
    Registro38501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
