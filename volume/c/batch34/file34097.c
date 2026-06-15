// fichero 34097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34097;

Registro34097 crear_registro34097(int id) {
    Registro34097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
