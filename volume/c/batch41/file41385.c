// fichero 41385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41385;

Registro41385 crear_registro41385(int id) {
    Registro41385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
