// fichero 35097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35097;

Registro35097 crear_registro35097(int id) {
    Registro35097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
