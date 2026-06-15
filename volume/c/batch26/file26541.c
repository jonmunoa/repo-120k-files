// fichero 26541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26541;

Registro26541 crear_registro26541(int id) {
    Registro26541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
