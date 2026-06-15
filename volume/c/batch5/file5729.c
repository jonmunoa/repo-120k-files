// fichero 5729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5729;

Registro5729 crear_registro5729(int id) {
    Registro5729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
