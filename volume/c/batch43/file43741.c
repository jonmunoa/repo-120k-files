// fichero 43741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43741;

Registro43741 crear_registro43741(int id) {
    Registro43741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
