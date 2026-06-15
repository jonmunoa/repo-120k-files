// fichero 921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro921;

Registro921 crear_registro921(int id) {
    Registro921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
