// fichero 669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro669;

Registro669 crear_registro669(int id) {
    Registro669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
