// fichero 49601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49601;

Registro49601 crear_registro49601(int id) {
    Registro49601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
