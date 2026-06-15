// fichero 3013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3013;

Registro3013 crear_registro3013(int id) {
    Registro3013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
