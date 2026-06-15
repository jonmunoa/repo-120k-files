// fichero 24529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24529;

Registro24529 crear_registro24529(int id) {
    Registro24529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
