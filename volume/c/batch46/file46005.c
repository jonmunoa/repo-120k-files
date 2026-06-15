// fichero 46005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46005;

Registro46005 crear_registro46005(int id) {
    Registro46005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
