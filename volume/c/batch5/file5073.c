// fichero 5073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5073;

Registro5073 crear_registro5073(int id) {
    Registro5073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
