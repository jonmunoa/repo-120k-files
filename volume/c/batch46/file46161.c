// fichero 46161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46161;

Registro46161 crear_registro46161(int id) {
    Registro46161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
