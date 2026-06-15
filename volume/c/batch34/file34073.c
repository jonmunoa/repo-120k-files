// fichero 34073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34073;

Registro34073 crear_registro34073(int id) {
    Registro34073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
