// fichero 665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro665;

Registro665 crear_registro665(int id) {
    Registro665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
