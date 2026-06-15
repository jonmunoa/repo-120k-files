// fichero 26857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26857;

Registro26857 crear_registro26857(int id) {
    Registro26857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
