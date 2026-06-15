// fichero 4293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4293;

Registro4293 crear_registro4293(int id) {
    Registro4293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
