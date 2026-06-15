// fichero 9541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9541;

Registro9541 crear_registro9541(int id) {
    Registro9541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
