// fichero 47681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47681;

Registro47681 crear_registro47681(int id) {
    Registro47681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
