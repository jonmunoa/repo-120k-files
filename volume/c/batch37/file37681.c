// fichero 37681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37681;

Registro37681 crear_registro37681(int id) {
    Registro37681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
