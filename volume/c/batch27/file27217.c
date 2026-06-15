// fichero 27217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27217;

Registro27217 crear_registro27217(int id) {
    Registro27217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
