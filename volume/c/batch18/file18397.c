// fichero 18397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18397;

Registro18397 crear_registro18397(int id) {
    Registro18397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
