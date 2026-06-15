// fichero 8213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8213;

Registro8213 crear_registro8213(int id) {
    Registro8213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
