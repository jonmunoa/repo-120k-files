// fichero 10517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10517;

Registro10517 crear_registro10517(int id) {
    Registro10517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
