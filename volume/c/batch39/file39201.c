// fichero 39201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39201;

Registro39201 crear_registro39201(int id) {
    Registro39201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
