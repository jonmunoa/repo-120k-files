// fichero 19677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19677;

Registro19677 crear_registro19677(int id) {
    Registro19677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
