// fichero 19089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19089;

Registro19089 crear_registro19089(int id) {
    Registro19089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
