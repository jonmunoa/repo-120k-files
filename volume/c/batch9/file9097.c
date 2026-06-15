// fichero 9097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9097;

Registro9097 crear_registro9097(int id) {
    Registro9097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
