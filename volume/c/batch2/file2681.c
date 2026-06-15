// fichero 2681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2681;

Registro2681 crear_registro2681(int id) {
    Registro2681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
