// fichero 37629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37629;

Registro37629 crear_registro37629(int id) {
    Registro37629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
