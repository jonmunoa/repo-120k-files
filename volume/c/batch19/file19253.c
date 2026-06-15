// fichero 19253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19253;

Registro19253 crear_registro19253(int id) {
    Registro19253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
