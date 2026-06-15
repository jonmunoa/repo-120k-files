// fichero 15681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15681;

Registro15681 crear_registro15681(int id) {
    Registro15681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
