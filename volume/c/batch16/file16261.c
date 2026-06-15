// fichero 16261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16261;

Registro16261 crear_registro16261(int id) {
    Registro16261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
