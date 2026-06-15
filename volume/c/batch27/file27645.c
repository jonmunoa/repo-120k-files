// fichero 27645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27645;

Registro27645 crear_registro27645(int id) {
    Registro27645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
