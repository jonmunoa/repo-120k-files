// fichero 16389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16389;

Registro16389 crear_registro16389(int id) {
    Registro16389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
