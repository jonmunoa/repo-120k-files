// fichero 47653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47653;

Registro47653 crear_registro47653(int id) {
    Registro47653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
