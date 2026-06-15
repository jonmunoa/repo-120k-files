// fichero 24957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24957;

Registro24957 crear_registro24957(int id) {
    Registro24957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
