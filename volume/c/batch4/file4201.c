// fichero 4201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4201;

Registro4201 crear_registro4201(int id) {
    Registro4201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
