// fichero 44653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44653;

Registro44653 crear_registro44653(int id) {
    Registro44653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
