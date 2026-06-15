// fichero 45745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45745;

Registro45745 crear_registro45745(int id) {
    Registro45745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
