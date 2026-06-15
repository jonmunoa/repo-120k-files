// fichero 4241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4241;

Registro4241 crear_registro4241(int id) {
    Registro4241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
