// fichero 7681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7681;

Registro7681 crear_registro7681(int id) {
    Registro7681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
