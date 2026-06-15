// fichero 7185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7185;

Registro7185 crear_registro7185(int id) {
    Registro7185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
