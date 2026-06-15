// fichero 30909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30909;

Registro30909 crear_registro30909(int id) {
    Registro30909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
