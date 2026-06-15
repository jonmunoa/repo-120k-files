// fichero 45841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45841;

Registro45841 crear_registro45841(int id) {
    Registro45841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
