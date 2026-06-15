// fichero 813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro813;

Registro813 crear_registro813(int id) {
    Registro813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
