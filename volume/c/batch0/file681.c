// fichero 681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro681;

Registro681 crear_registro681(int id) {
    Registro681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
