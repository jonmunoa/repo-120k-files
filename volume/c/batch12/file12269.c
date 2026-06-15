// fichero 12269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12269;

Registro12269 crear_registro12269(int id) {
    Registro12269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
