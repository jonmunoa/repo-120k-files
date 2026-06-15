// fichero 4177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4177;

Registro4177 crear_registro4177(int id) {
    Registro4177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
