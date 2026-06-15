// fichero 12437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12437;

Registro12437 crear_registro12437(int id) {
    Registro12437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
