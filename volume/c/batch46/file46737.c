// fichero 46737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46737;

Registro46737 crear_registro46737(int id) {
    Registro46737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
