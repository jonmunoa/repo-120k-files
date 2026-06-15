// fichero 11017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11017;

Registro11017 crear_registro11017(int id) {
    Registro11017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
