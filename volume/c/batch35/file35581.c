// fichero 35581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35581;

Registro35581 crear_registro35581(int id) {
    Registro35581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
