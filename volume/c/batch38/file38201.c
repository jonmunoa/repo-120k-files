// fichero 38201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38201;

Registro38201 crear_registro38201(int id) {
    Registro38201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
