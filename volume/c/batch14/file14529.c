// fichero 14529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14529;

Registro14529 crear_registro14529(int id) {
    Registro14529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
