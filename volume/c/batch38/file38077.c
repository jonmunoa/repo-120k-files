// fichero 38077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38077;

Registro38077 crear_registro38077(int id) {
    Registro38077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
