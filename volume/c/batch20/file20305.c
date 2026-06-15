// fichero 20305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20305;

Registro20305 crear_registro20305(int id) {
    Registro20305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
