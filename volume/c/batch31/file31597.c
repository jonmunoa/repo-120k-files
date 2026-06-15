// fichero 31597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31597;

Registro31597 crear_registro31597(int id) {
    Registro31597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
