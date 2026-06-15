// fichero 31901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31901;

Registro31901 crear_registro31901(int id) {
    Registro31901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
