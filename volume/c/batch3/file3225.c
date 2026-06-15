// fichero 3225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3225;

Registro3225 crear_registro3225(int id) {
    Registro3225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
