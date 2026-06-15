// fichero 42737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42737;

Registro42737 crear_registro42737(int id) {
    Registro42737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
