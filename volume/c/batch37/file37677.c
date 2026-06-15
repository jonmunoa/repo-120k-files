// fichero 37677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37677;

Registro37677 crear_registro37677(int id) {
    Registro37677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
