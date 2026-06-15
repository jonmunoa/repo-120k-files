// fichero 29165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29165;

Registro29165 crear_registro29165(int id) {
    Registro29165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
