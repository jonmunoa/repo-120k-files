// fichero 35405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35405;

Registro35405 crear_registro35405(int id) {
    Registro35405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
