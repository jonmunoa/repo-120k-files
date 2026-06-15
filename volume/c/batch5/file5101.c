// fichero 5101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5101;

Registro5101 crear_registro5101(int id) {
    Registro5101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
