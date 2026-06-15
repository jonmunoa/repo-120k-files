// fichero 37 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37;

Registro37 crear_registro37(int id) {
    Registro37 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
