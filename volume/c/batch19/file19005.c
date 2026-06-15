// fichero 19005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19005;

Registro19005 crear_registro19005(int id) {
    Registro19005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
