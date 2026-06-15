// fichero 32113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32113;

Registro32113 crear_registro32113(int id) {
    Registro32113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
