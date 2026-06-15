// fichero 5645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5645;

Registro5645 crear_registro5645(int id) {
    Registro5645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
