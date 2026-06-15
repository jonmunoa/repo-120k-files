// fichero 32653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32653;

Registro32653 crear_registro32653(int id) {
    Registro32653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
