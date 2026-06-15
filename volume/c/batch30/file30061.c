// fichero 30061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30061;

Registro30061 crear_registro30061(int id) {
    Registro30061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
