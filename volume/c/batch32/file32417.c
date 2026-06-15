// fichero 32417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32417;

Registro32417 crear_registro32417(int id) {
    Registro32417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
