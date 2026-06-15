// fichero 3401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3401;

Registro3401 crear_registro3401(int id) {
    Registro3401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
