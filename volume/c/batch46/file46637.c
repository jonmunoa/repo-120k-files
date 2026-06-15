// fichero 46637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46637;

Registro46637 crear_registro46637(int id) {
    Registro46637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
