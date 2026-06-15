// fichero 21073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21073;

Registro21073 crear_registro21073(int id) {
    Registro21073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
