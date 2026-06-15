// fichero 5049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5049;

Registro5049 crear_registro5049(int id) {
    Registro5049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
