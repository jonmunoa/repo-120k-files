// fichero 17045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17045;

Registro17045 crear_registro17045(int id) {
    Registro17045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
