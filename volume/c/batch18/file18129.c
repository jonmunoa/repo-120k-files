// fichero 18129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18129;

Registro18129 crear_registro18129(int id) {
    Registro18129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
