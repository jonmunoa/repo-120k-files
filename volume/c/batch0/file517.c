// fichero 517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro517;

Registro517 crear_registro517(int id) {
    Registro517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
