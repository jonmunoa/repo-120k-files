// fichero 17305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17305;

Registro17305 crear_registro17305(int id) {
    Registro17305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
