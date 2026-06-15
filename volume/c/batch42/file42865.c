// fichero 42865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42865;

Registro42865 crear_registro42865(int id) {
    Registro42865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
