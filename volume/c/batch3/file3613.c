// fichero 3613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3613;

Registro3613 crear_registro3613(int id) {
    Registro3613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
