// fichero 3417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3417;

Registro3417 crear_registro3417(int id) {
    Registro3417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
