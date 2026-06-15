// fichero 18177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18177;

Registro18177 crear_registro18177(int id) {
    Registro18177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
