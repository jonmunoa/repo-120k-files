// fichero 3165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3165;

Registro3165 crear_registro3165(int id) {
    Registro3165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
