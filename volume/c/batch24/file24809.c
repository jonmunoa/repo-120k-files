// fichero 24809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24809;

Registro24809 crear_registro24809(int id) {
    Registro24809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
