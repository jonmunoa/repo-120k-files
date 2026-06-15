// fichero 20073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20073;

Registro20073 crear_registro20073(int id) {
    Registro20073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
