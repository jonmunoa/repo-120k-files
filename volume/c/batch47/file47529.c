// fichero 47529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47529;

Registro47529 crear_registro47529(int id) {
    Registro47529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
