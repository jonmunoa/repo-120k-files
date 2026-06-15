// fichero 15021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15021;

Registro15021 crear_registro15021(int id) {
    Registro15021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
