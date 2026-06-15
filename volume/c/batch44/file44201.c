// fichero 44201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44201;

Registro44201 crear_registro44201(int id) {
    Registro44201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
