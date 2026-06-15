// fichero 37049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37049;

Registro37049 crear_registro37049(int id) {
    Registro37049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
