// fichero 5037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5037;

Registro5037 crear_registro5037(int id) {
    Registro5037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
