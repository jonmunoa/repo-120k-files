// fichero 35733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35733;

Registro35733 crear_registro35733(int id) {
    Registro35733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
