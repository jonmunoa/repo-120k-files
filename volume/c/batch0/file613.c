// fichero 613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro613;

Registro613 crear_registro613(int id) {
    Registro613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
