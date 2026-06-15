// fichero 18745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18745;

Registro18745 crear_registro18745(int id) {
    Registro18745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
