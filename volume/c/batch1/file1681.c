// fichero 1681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1681;

Registro1681 crear_registro1681(int id) {
    Registro1681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
