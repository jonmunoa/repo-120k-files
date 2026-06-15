// fichero 5529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5529;

Registro5529 crear_registro5529(int id) {
    Registro5529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
