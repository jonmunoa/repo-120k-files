// fichero 16073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16073;

Registro16073 crear_registro16073(int id) {
    Registro16073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
