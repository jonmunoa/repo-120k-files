// fichero 37909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37909;

Registro37909 crear_registro37909(int id) {
    Registro37909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
