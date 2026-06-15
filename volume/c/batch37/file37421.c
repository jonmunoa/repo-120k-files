// fichero 37421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37421;

Registro37421 crear_registro37421(int id) {
    Registro37421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
