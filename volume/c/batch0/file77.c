// fichero 77 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro77;

Registro77 crear_registro77(int id) {
    Registro77 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
