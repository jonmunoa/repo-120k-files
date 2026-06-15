// fichero 19317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19317;

Registro19317 crear_registro19317(int id) {
    Registro19317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
