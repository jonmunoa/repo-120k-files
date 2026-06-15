// fichero 38017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38017;

Registro38017 crear_registro38017(int id) {
    Registro38017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
