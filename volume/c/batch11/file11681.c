// fichero 11681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11681;

Registro11681 crear_registro11681(int id) {
    Registro11681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
