// fichero 45685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45685;

Registro45685 crear_registro45685(int id) {
    Registro45685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
