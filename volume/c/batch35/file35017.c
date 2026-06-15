// fichero 35017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35017;

Registro35017 crear_registro35017(int id) {
    Registro35017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
