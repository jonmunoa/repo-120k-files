// fichero 30185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30185;

Registro30185 crear_registro30185(int id) {
    Registro30185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
