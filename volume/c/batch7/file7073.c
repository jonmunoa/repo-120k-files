// fichero 7073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7073;

Registro7073 crear_registro7073(int id) {
    Registro7073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
