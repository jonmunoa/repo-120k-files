// fichero 19421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19421;

Registro19421 crear_registro19421(int id) {
    Registro19421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
