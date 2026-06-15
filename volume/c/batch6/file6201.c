// fichero 6201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6201;

Registro6201 crear_registro6201(int id) {
    Registro6201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
