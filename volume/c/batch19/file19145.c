// fichero 19145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19145;

Registro19145 crear_registro19145(int id) {
    Registro19145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
