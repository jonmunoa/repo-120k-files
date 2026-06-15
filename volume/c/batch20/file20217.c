// fichero 20217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20217;

Registro20217 crear_registro20217(int id) {
    Registro20217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
