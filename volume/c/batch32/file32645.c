// fichero 32645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32645;

Registro32645 crear_registro32645(int id) {
    Registro32645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
