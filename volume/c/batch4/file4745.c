// fichero 4745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4745;

Registro4745 crear_registro4745(int id) {
    Registro4745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
