// fichero 8073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8073;

Registro8073 crear_registro8073(int id) {
    Registro8073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
