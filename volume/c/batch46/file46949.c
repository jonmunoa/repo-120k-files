// fichero 46949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46949;

Registro46949 crear_registro46949(int id) {
    Registro46949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
