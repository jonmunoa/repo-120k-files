// fichero 19325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19325;

Registro19325 crear_registro19325(int id) {
    Registro19325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
