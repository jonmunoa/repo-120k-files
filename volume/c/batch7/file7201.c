// fichero 7201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7201;

Registro7201 crear_registro7201(int id) {
    Registro7201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
