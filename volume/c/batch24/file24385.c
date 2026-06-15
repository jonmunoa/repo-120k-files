// fichero 24385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24385;

Registro24385 crear_registro24385(int id) {
    Registro24385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
