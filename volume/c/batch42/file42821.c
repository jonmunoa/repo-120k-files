// fichero 42821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42821;

Registro42821 crear_registro42821(int id) {
    Registro42821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
