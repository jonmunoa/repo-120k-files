// fichero 27289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27289;

Registro27289 crear_registro27289(int id) {
    Registro27289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
