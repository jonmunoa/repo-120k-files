// fichero 34365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34365;

Registro34365 crear_registro34365(int id) {
    Registro34365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
