// fichero 17825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17825;

Registro17825 crear_registro17825(int id) {
    Registro17825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
