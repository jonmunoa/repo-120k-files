// fichero 8653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8653;

Registro8653 crear_registro8653(int id) {
    Registro8653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
