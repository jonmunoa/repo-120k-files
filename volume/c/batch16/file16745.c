// fichero 16745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16745;

Registro16745 crear_registro16745(int id) {
    Registro16745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
