// fichero 47805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47805;

Registro47805 crear_registro47805(int id) {
    Registro47805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
