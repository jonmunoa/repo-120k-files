// fichero 49681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49681;

Registro49681 crear_registro49681(int id) {
    Registro49681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
