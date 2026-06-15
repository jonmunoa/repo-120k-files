// fichero 19681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19681;

Registro19681 crear_registro19681(int id) {
    Registro19681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
