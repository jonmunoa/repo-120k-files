// fichero 46001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46001;

Registro46001 crear_registro46001(int id) {
    Registro46001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
