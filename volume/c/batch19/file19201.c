// fichero 19201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19201;

Registro19201 crear_registro19201(int id) {
    Registro19201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
