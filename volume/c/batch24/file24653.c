// fichero 24653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24653;

Registro24653 crear_registro24653(int id) {
    Registro24653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
