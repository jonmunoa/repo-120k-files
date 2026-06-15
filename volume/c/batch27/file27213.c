// fichero 27213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27213;

Registro27213 crear_registro27213(int id) {
    Registro27213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
