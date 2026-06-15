// fichero 14737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14737;

Registro14737 crear_registro14737(int id) {
    Registro14737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
