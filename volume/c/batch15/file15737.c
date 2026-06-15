// fichero 15737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15737;

Registro15737 crear_registro15737(int id) {
    Registro15737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
