// fichero 11517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11517;

Registro11517 crear_registro11517(int id) {
    Registro11517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
