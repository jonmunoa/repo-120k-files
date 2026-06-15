// fichero 36185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36185;

Registro36185 crear_registro36185(int id) {
    Registro36185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
