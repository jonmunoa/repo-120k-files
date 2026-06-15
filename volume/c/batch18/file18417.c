// fichero 18417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18417;

Registro18417 crear_registro18417(int id) {
    Registro18417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
