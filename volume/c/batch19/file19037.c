// fichero 19037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19037;

Registro19037 crear_registro19037(int id) {
    Registro19037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
