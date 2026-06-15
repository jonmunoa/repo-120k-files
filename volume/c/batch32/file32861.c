// fichero 32861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32861;

Registro32861 crear_registro32861(int id) {
    Registro32861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
