// fichero 13957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13957;

Registro13957 crear_registro13957(int id) {
    Registro13957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
