// fichero 41097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41097;

Registro41097 crear_registro41097(int id) {
    Registro41097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
