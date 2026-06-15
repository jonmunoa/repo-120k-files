// fichero 11281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11281;

Registro11281 crear_registro11281(int id) {
    Registro11281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
