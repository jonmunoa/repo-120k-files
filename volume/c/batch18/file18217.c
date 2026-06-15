// fichero 18217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18217;

Registro18217 crear_registro18217(int id) {
    Registro18217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
