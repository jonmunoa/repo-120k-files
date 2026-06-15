// fichero 6509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6509;

Registro6509 crear_registro6509(int id) {
    Registro6509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
