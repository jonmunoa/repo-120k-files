// fichero 8481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8481;

Registro8481 crear_registro8481(int id) {
    Registro8481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
