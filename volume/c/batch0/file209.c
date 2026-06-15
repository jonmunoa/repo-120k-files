// fichero 209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro209;

Registro209 crear_registro209(int id) {
    Registro209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
