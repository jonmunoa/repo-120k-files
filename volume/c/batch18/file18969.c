// fichero 18969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18969;

Registro18969 crear_registro18969(int id) {
    Registro18969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
