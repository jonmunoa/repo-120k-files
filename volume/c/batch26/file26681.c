// fichero 26681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26681;

Registro26681 crear_registro26681(int id) {
    Registro26681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
