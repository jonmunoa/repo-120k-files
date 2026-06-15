// fichero 46945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46945;

Registro46945 crear_registro46945(int id) {
    Registro46945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
