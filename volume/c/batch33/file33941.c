// fichero 33941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33941;

Registro33941 crear_registro33941(int id) {
    Registro33941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
