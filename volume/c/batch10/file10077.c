// fichero 10077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10077;

Registro10077 crear_registro10077(int id) {
    Registro10077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
