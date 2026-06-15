// fichero 11273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11273;

Registro11273 crear_registro11273(int id) {
    Registro11273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
