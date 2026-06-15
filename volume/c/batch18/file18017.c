// fichero 18017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18017;

Registro18017 crear_registro18017(int id) {
    Registro18017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
