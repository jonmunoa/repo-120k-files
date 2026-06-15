// fichero 18421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18421;

Registro18421 crear_registro18421(int id) {
    Registro18421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
