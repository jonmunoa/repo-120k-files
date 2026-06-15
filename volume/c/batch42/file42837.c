// fichero 42837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42837;

Registro42837 crear_registro42837(int id) {
    Registro42837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
