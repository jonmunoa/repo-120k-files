// fichero 241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro241;

Registro241 crear_registro241(int id) {
    Registro241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
