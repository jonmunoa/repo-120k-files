// fichero 24257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24257;

Registro24257 crear_registro24257(int id) {
    Registro24257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
