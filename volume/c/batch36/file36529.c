// fichero 36529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36529;

Registro36529 crear_registro36529(int id) {
    Registro36529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
