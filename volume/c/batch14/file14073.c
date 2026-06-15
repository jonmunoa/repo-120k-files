// fichero 14073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14073;

Registro14073 crear_registro14073(int id) {
    Registro14073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
