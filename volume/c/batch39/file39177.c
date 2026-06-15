// fichero 39177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39177;

Registro39177 crear_registro39177(int id) {
    Registro39177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
