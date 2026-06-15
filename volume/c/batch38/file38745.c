// fichero 38745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38745;

Registro38745 crear_registro38745(int id) {
    Registro38745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
