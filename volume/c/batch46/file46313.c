// fichero 46313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46313;

Registro46313 crear_registro46313(int id) {
    Registro46313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
