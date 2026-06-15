// fichero 6073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6073;

Registro6073 crear_registro6073(int id) {
    Registro6073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
