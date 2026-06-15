// fichero 729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro729;

Registro729 crear_registro729(int id) {
    Registro729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
