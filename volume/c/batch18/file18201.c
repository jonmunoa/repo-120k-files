// fichero 18201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18201;

Registro18201 crear_registro18201(int id) {
    Registro18201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
