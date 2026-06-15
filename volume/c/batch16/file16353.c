// fichero 16353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16353;

Registro16353 crear_registro16353(int id) {
    Registro16353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
