// fichero 57 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro57;

Registro57 crear_registro57(int id) {
    Registro57 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
