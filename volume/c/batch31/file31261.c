// fichero 31261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31261;

Registro31261 crear_registro31261(int id) {
    Registro31261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
