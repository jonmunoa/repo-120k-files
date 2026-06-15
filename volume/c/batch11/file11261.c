// fichero 11261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11261;

Registro11261 crear_registro11261(int id) {
    Registro11261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
