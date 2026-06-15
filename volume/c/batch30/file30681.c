// fichero 30681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30681;

Registro30681 crear_registro30681(int id) {
    Registro30681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
