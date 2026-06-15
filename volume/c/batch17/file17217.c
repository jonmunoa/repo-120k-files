// fichero 17217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17217;

Registro17217 crear_registro17217(int id) {
    Registro17217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
