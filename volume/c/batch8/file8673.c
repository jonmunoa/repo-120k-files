// fichero 8673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8673;

Registro8673 crear_registro8673(int id) {
    Registro8673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
