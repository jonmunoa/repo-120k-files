// fichero 32761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32761;

Registro32761 crear_registro32761(int id) {
    Registro32761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
