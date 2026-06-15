// fichero 5653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5653;

Registro5653 crear_registro5653(int id) {
    Registro5653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
