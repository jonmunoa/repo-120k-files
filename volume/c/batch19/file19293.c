// fichero 19293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19293;

Registro19293 crear_registro19293(int id) {
    Registro19293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
