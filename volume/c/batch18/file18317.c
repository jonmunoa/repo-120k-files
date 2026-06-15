// fichero 18317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18317;

Registro18317 crear_registro18317(int id) {
    Registro18317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
