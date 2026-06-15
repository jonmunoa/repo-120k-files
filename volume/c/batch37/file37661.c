// fichero 37661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37661;

Registro37661 crear_registro37661(int id) {
    Registro37661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
