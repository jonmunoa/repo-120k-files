// fichero 36653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36653;

Registro36653 crear_registro36653(int id) {
    Registro36653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
