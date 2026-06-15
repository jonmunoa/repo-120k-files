// fichero 30241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30241;

Registro30241 crear_registro30241(int id) {
    Registro30241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
