// fichero 35133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35133;

Registro35133 crear_registro35133(int id) {
    Registro35133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
