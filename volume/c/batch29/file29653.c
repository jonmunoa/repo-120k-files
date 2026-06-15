// fichero 29653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29653;

Registro29653 crear_registro29653(int id) {
    Registro29653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
