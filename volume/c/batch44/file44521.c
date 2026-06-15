// fichero 44521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44521;

Registro44521 crear_registro44521(int id) {
    Registro44521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
