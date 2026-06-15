// fichero 21013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21013;

Registro21013 crear_registro21013(int id) {
    Registro21013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
