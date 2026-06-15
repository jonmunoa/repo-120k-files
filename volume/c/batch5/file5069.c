// fichero 5069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5069;

Registro5069 crear_registro5069(int id) {
    Registro5069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
