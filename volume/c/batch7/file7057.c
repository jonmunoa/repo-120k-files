// fichero 7057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7057;

Registro7057 crear_registro7057(int id) {
    Registro7057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
