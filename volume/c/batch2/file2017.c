// fichero 2017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2017;

Registro2017 crear_registro2017(int id) {
    Registro2017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
