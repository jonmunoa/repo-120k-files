// fichero 17681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17681;

Registro17681 crear_registro17681(int id) {
    Registro17681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
