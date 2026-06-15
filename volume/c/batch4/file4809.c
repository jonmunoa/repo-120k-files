// fichero 4809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4809;

Registro4809 crear_registro4809(int id) {
    Registro4809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
