// fichero 47101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47101;

Registro47101 crear_registro47101(int id) {
    Registro47101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
