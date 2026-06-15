// fichero 38293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38293;

Registro38293 crear_registro38293(int id) {
    Registro38293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
