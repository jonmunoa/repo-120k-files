// fichero 5397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5397;

Registro5397 crear_registro5397(int id) {
    Registro5397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
