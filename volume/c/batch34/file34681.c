// fichero 34681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34681;

Registro34681 crear_registro34681(int id) {
    Registro34681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
