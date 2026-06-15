// fichero 36105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36105;

Registro36105 crear_registro36105(int id) {
    Registro36105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
