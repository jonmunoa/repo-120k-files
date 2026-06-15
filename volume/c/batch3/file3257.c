// fichero 3257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3257;

Registro3257 crear_registro3257(int id) {
    Registro3257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
