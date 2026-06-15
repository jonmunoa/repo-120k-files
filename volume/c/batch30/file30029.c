// fichero 30029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30029;

Registro30029 crear_registro30029(int id) {
    Registro30029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
