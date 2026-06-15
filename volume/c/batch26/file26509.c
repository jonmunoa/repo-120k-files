// fichero 26509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26509;

Registro26509 crear_registro26509(int id) {
    Registro26509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
