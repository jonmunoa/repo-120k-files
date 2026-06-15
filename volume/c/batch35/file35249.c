// fichero 35249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35249;

Registro35249 crear_registro35249(int id) {
    Registro35249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
