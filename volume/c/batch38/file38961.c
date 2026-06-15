// fichero 38961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38961;

Registro38961 crear_registro38961(int id) {
    Registro38961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
