// fichero 28681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28681;

Registro28681 crear_registro28681(int id) {
    Registro28681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
