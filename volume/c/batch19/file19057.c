// fichero 19057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19057;

Registro19057 crear_registro19057(int id) {
    Registro19057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
