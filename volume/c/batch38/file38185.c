// fichero 38185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38185;

Registro38185 crear_registro38185(int id) {
    Registro38185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
