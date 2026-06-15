// fichero 15149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15149;

Registro15149 crear_registro15149(int id) {
    Registro15149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
