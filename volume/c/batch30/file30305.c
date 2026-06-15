// fichero 30305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30305;

Registro30305 crear_registro30305(int id) {
    Registro30305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
