// fichero 11377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11377;

Registro11377 crear_registro11377(int id) {
    Registro11377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
