// fichero 30809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30809;

Registro30809 crear_registro30809(int id) {
    Registro30809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
