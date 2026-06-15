// fichero 35653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35653;

Registro35653 crear_registro35653(int id) {
    Registro35653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
