// fichero 30929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30929;

Registro30929 crear_registro30929(int id) {
    Registro30929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
