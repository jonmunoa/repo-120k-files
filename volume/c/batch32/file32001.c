// fichero 32001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32001;

Registro32001 crear_registro32001(int id) {
    Registro32001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
