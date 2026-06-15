// fichero 19021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19021;

Registro19021 crear_registro19021(int id) {
    Registro19021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
