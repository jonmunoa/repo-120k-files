// fichero 24165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24165;

Registro24165 crear_registro24165(int id) {
    Registro24165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
