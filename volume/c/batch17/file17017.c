// fichero 17017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17017;

Registro17017 crear_registro17017(int id) {
    Registro17017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
