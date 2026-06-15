// fichero 577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro577;

Registro577 crear_registro577(int id) {
    Registro577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
