// fichero 3305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3305;

Registro3305 crear_registro3305(int id) {
    Registro3305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
