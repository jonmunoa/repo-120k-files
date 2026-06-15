// fichero 36357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36357;

Registro36357 crear_registro36357(int id) {
    Registro36357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
