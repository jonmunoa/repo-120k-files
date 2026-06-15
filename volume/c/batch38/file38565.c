// fichero 38565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38565;

Registro38565 crear_registro38565(int id) {
    Registro38565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
