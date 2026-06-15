// fichero 35269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35269;

Registro35269 crear_registro35269(int id) {
    Registro35269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
