// fichero 5141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5141;

Registro5141 crear_registro5141(int id) {
    Registro5141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
