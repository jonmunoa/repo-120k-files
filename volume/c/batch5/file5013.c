// fichero 5013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5013;

Registro5013 crear_registro5013(int id) {
    Registro5013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
