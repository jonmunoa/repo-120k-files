// fichero 8097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8097;

Registro8097 crear_registro8097(int id) {
    Registro8097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
