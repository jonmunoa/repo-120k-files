// fichero 5769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5769;

Registro5769 crear_registro5769(int id) {
    Registro5769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
