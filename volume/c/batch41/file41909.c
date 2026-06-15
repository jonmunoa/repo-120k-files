// fichero 41909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41909;

Registro41909 crear_registro41909(int id) {
    Registro41909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
