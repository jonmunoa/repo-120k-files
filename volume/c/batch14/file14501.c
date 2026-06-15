// fichero 14501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14501;

Registro14501 crear_registro14501(int id) {
    Registro14501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
