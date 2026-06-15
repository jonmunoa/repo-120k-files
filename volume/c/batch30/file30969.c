// fichero 30969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30969;

Registro30969 crear_registro30969(int id) {
    Registro30969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
