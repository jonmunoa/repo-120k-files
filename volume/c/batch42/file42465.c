// fichero 42465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42465;

Registro42465 crear_registro42465(int id) {
    Registro42465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
