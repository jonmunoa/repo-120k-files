// fichero 5029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5029;

Registro5029 crear_registro5029(int id) {
    Registro5029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
