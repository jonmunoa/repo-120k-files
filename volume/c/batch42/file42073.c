// fichero 42073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42073;

Registro42073 crear_registro42073(int id) {
    Registro42073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
