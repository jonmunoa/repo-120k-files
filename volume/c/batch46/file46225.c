// fichero 46225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46225;

Registro46225 crear_registro46225(int id) {
    Registro46225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
