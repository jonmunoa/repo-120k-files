// fichero 3033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3033;

Registro3033 crear_registro3033(int id) {
    Registro3033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
