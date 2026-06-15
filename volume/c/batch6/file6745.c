// fichero 6745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6745;

Registro6745 crear_registro6745(int id) {
    Registro6745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
