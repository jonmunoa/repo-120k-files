// fichero 38681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38681;

Registro38681 crear_registro38681(int id) {
    Registro38681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
