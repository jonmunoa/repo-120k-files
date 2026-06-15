// fichero 5561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5561;

Registro5561 crear_registro5561(int id) {
    Registro5561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
