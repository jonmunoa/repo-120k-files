// fichero 7281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7281;

Registro7281 crear_registro7281(int id) {
    Registro7281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
