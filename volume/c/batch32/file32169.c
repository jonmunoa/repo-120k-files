// fichero 32169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32169;

Registro32169 crear_registro32169(int id) {
    Registro32169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
