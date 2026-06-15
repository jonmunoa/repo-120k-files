// fichero 15153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15153;

Registro15153 crear_registro15153(int id) {
    Registro15153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
