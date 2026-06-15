// fichero 17733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17733;

Registro17733 crear_registro17733(int id) {
    Registro17733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
