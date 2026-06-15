// fichero 3377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3377;

Registro3377 crear_registro3377(int id) {
    Registro3377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
