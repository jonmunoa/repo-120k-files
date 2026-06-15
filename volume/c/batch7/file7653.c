// fichero 7653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7653;

Registro7653 crear_registro7653(int id) {
    Registro7653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
