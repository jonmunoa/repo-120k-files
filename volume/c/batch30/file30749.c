// fichero 30749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30749;

Registro30749 crear_registro30749(int id) {
    Registro30749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
