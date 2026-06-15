// fichero 19521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19521;

Registro19521 crear_registro19521(int id) {
    Registro19521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
