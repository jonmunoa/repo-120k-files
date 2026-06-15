// fichero 42681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42681;

Registro42681 crear_registro42681(int id) {
    Registro42681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
