// fichero 30709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30709;

Registro30709 crear_registro30709(int id) {
    Registro30709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
