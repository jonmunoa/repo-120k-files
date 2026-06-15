// fichero 12857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12857;

Registro12857 crear_registro12857(int id) {
    Registro12857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
