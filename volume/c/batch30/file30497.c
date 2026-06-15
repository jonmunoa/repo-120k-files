// fichero 30497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30497;

Registro30497 crear_registro30497(int id) {
    Registro30497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
