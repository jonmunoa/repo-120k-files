// fichero 36417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36417;

Registro36417 crear_registro36417(int id) {
    Registro36417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
