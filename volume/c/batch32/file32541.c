// fichero 32541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32541;

Registro32541 crear_registro32541(int id) {
    Registro32541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
