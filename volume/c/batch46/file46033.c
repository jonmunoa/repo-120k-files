// fichero 46033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46033;

Registro46033 crear_registro46033(int id) {
    Registro46033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
