// fichero 4261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4261;

Registro4261 crear_registro4261(int id) {
    Registro4261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
