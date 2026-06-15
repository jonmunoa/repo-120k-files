// fichero 6217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6217;

Registro6217 crear_registro6217(int id) {
    Registro6217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
