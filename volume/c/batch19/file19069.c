// fichero 19069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19069;

Registro19069 crear_registro19069(int id) {
    Registro19069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
