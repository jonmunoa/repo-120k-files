// fichero 17653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17653;

Registro17653 crear_registro17653(int id) {
    Registro17653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
