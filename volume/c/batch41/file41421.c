// fichero 41421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41421;

Registro41421 crear_registro41421(int id) {
    Registro41421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
